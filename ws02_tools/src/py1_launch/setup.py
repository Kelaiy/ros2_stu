from setuptools import find_packages, setup
from glob import glob       #配置launch使用
package_name = 'py1_launch'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name, glob("launch/py/*_launch.py")),
        ('share/' + package_name, glob("launch/xml/*_launch.xml")),
        ('share/' + package_name, glob("launch/yaml/*_launch.yaml"))

        # ('share/' + package_name, ['launch/py/py1_helloword_launch.py']),
        # ('share/' + package_name, ['launch/xml/xml1_helloword_launch.xml']),
        # ('share/' + package_name, ['launch/yaml/yaml1_helloword_launch.yaml'])
    ],
    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hzc',
    maintainer_email='hzc@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        ],
    },
)
