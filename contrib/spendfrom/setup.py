from distutils.core import setup
setup(name='FYRspendfrom',
      version='1.0',
      description='Command-line utility for fyre "coin control"',
      author='Gavin Andresen',
      author_email='gavin@fyrefoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
