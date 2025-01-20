import cv2
import yaml
import os

def convert_png_to_pgm(png_file, yaml_file, output_pgm_file, output_yaml_file):
    # 读取PNG文件并转换为灰度图
    img = cv2.imread(png_file, cv2.IMREAD_GRAYSCALE)
    if img is None:
        print("无法读取PNG文件")
        return

    # 保存为PGM格式
    cv2.imwrite(output_pgm_file, img)
    print(f"已保存PGM文件: {output_pgm_file}")

    # 修改YAML文件内容
    with open(yaml_file, 'r') as f:
        yaml_data = yaml.safe_load(f)

    # 替换图像文件格式路径
    yaml_data["image"] = os.path.basename(output_pgm_file)

    # 保存新的YAML文件
    with open(output_yaml_file, 'w') as f:
        yaml.dump(yaml_data, f)
    print(f"已保存修改后的YAML文件: {output_yaml_file}")


# 示例使用
png_file = "office_occupancy_map.png"           # 输入PNG地图路径
yaml_file = "office_occupancy_map_coordinate.yaml"         # 输入YAML路径
output_pgm_file = "office.pgm"    # 输出PGM地图路径
output_yaml_file = "office.yaml"  # 输出修改后的YAML路径

convert_png_to_pgm(png_file, yaml_file, output_pgm_file, output_yaml_file)

