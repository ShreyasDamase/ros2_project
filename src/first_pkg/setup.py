from setuptools import find_packages, setup

package_name = 'first_pkg'

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
    maintainer_email='shreyasdamase@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'simple_node= first_pkg.simple_node:main' ,
            'publisher_node= first_pkg.publisher_node:main',
            'subscriber_node=first_pkg.subscriber_node:main',
            'add_two_ints_server=first_pkg.add_two_ints_server:main',
            'add_two_ints_client=first_pkg.add_two_ints_client:main'
        ],
    },
)
