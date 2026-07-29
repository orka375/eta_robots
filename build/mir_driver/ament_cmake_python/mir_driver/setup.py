from setuptools import find_packages
from setuptools import setup

setup(
    name='mir_driver',
    version='1.1.3',
    packages=find_packages(
        include=('mir_driver', 'mir_driver.*')),
)
