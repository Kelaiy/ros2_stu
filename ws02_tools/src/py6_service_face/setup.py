from setuptools import find_packages, setup
from glob import glob       #配置launch使用
package_name = 'py6_service_face'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name+'/resource', glob("resource/*.jpg")),
        # ('share/' + package_name+'/resource', ['resource/image.jpg']),
    ],
    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kelaiy',
    maintainer_email='kelaiy@example.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'learn_face_detect=py6_service_face.learn_face_detect:main',
            'face_detect_node=py6_service_face.face_detect_node:main',
            'face_detect_client_node=py6_service_face.face_detect_client_node:main'
        ],
    },
)
