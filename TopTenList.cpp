//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::display_forward()
{
  for(unsigned int i = 0; i < _list.size(); i++)
  {
    Hyperlink content = _list[i];
    std::cout << i + 1 << ". " << content.text << " " <<  content.url << std::endl;
  }
}

void TopTenList::display_backward()
{
  for(unsigned int i = 1; i <= _list.size(); i++)
  {
    Hyperlink content = _list[_list.size() - i];
    std::cout << _list.size() - i + 1 << ". " << content.text << " " <<  content.url << std::endl;
  }
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index];
}
