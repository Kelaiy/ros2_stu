from setuptools import find_packages, setup

package_name = 'py01_topic'

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
            'demo01_talker_sty_py = py01_topic.demo01_talker_sty_py:main',
            'demo01_listener_sty_py = py01_topic.demo01_listener_sty_py:main',
            'demo02_listener_stu_py = py01_topic.demo02_listener_stu_py:main',
            'demo02_talker_stu_py = py01_topic.demo02_talker_stu_py:main'
        ],
    },
)
