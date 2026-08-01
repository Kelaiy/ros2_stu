from setuptools import find_packages, setup
from glob import glob       #配置launch使用
package_name = 'py5_exercise'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name, glob("launch/*.launch.py")),
        ('share/' + package_name, glob("launch/*.launch.xml"))
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
            'exer1_spawn_py = py5_exercise.exer1_spawn_py:main',
            'exer2_tf_broadcaster_py = py5_exercise.exer2_tf_broadcaster_py:main',
            'exer3_tf_listener_py = py5_exercise.exer3_tf_listener_py:main'
        ],
    },
)
