{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyNyg/rjwwAmyvR0erSq0ox9",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/GeraldHufana/58010-DSAA/blob/main/LINKEDLIST.CPP\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": 8,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 35
        },
        "id": "g68W7gzpSDCJ",
        "outputId": "2380a591-e596-4a0a-bf1e-f04ddb966ced"
      },
      "outputs": [
        {
          "output_type": "execute_result",
          "data": {
            "text/plain": [
              "'f'"
            ],
            "application/vnd.google.colaboratory.intrinsic+json": {
              "type": "string"
            }
          },
          "metadata": {},
          "execution_count": 8
        }
      ],
      "source": [
        "import array\n",
        "array.typecodes\n",
        "a = array.array('i', [1,2,3,4,5,])   #initializing array\n",
        "b = array.array('f', [1.5,2.5,3.5,4.5,5.5,6.5])  #intializing arrray b\n",
        "a.typecode\n",
        "b.typecode"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "from array import array # importing array from array module\n",
        "a= array('i',[4,5,6,7]) # initializing array\n",
        "a.insert(1,2) # inserting element: 2 at index: 1\n",
        "a # Printing array a array('i', [4, 2, 5, 6, 7])\n",
        "a.insert(-1,0) # insert element: 0 at index: -1\n",
        "a\n",
        "a.insert(10, -1) # insert element: -1 at index: 10, this is out of range a\n",
        "array('i', [4, 2, 5, 6, 0, 7, -1])"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "mxnjq707TrpG",
        "outputId": "332428e3-3df8-46ce-c992-595aa4ceccdc"
      },
      "execution_count": 9,
      "outputs": [
        {
          "output_type": "execute_result",
          "data": {
            "text/plain": [
              "array('i', [4, 2, 5, 6, 0, 7, -1])"
            ]
          },
          "metadata": {},
          "execution_count": 9
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "class Node:\n",
        "  def __init__(self, data):\n",
        "    self.data = data # Assign data\n",
        "    self.next = None # initialize\n",
        "\n",
        "\n",
        "class LinkedList:\n",
        "\n",
        "  def __init__(self):\n",
        "    self.head = None\n",
        "\n",
        "if __name__=='__main__':\n",
        "  llist = LinkedList ()\n",
        "  llist.head = Node(1)\n",
        "  second = Node(2)\n",
        "  third = Node(3)\n",
        "\n",
        "  llist.head.next = second;  #link first node with second\n",
        "\n",
        "  second.next = third;       #link second node with third node\n",
        "\n",
        "  print(llist.head.data)\n",
        "\n",
        "def __printlist__(self):\n",
        "  temp = self.head\n",
        "  while(temp):\n",
        "    print(temp.data)\n",
        "    temp(temp.next)\n",
        "    print(list.printlist)\n",
        "\n"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "XPYJ17yYV9Sv",
        "outputId": "caaecd1a-3ae3-4c63-eb2a-44c0a59724b6"
      },
      "execution_count": 31,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "1\n"
          ]
        }
      ]
    }
  ]
}