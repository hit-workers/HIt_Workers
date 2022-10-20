import os
import sys
def main():
    path = os.path.split(sys.argv[0])[0]
    work_dir = path.split("\\")[-1]
    file = path + '\MDK-ARM\\' + work_dir + '\\' + work_dir + '.map'
    print(path)
    print(work_dir)
    print(file)
    if not os.path.exists(file):
        print('No file found....')
        return 0
    # exist
    with open( file, 'r' ) as f:
        data = f.readlines()[-6:-3]
    for index in data:
        print(index)
if __name__ == '__main__':
    main()


