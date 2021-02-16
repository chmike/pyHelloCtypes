"""
testing hello
"""

#from hello import *
import hello

def test_hello():
    """
    test hello
    """
    assert hello.hello("Gérard") == 'hello Gérard!'
    