from setuptools import find_packages, setup

package_name = 'py3_tf_broadcaster'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'demo1_tf_static_py = py3_tf_broadcaster.demo1_tf_static_py:main',
            'demo2_tf_dynamic_py = py3_tf_broadcaster.demo2_tf_dynamic_py:main',
            'demo3_point_tf_py = py3_tf_broadcaster.demo3_point_tf_py:main'
        ],
    },
)
