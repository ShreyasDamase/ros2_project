from setuptools import find_packages, setup

package_name = 'boki_pkg'

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
    maintainer='ShreyasDamase',
    maintainer_email='shreyasdamase@gmail,com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
           'boki_node = boki_pkg.boki_node:main',
            'boki_publisher = boki_pkg.boki_publisher:main',
            'boki_subscriber = boki_pkg.boki_subscriber:main'
        ],
    },
)
