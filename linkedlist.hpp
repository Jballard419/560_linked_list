template <typename T>
linkedlist<T>::linkedlist()
{
	this->m_top=nullptr;

	this->m_size=0;

}
template <typename T>
void linkedlist<T>::insert(const T newentry)
{
  insert(newentry,m_top);
  return;

}

template <typename T>
void linkedlist<T>::insert(const T val, node<T>* temp)
{




	if(temp == nullptr)
	{
  	temp=new node<T>(val);
    return;
	}
	else if (temp->getvalue()==val)
	{
    return;
  }
  else if (temp->getnext()==nullptr) {
    node<T>* newnode= new node<T>(val);
    newnode->setprevious(temp);
    temp->setnext(newnode);

	}
  else
  {
    insert(val,temp->getnext());
  }


	return;
	//so much easier when you have the pointers pointing down
}
template <typename T>
void linkedlist<T>::delete_node(const T newentry)
{
  delete_node(newentry,m_top);
  return;

}

template <typename T>
void linkedlist<T>::delete_node(const T val, node<T>* temp)
{




	if(temp == nullptr)
	{

  return;
	}
	else if (temp->getvalue()==val)
	{
    node<T>* previousnode= temp->getprevious();
    node<T>* nextnode= temp->nextprevious();
    if(previousnode != nullptr)
      previousnode->setnext(nextnode);
    if(nextnode != nullptr)
      nextnode ->setprevious(previousnode);
    if(temp==m_top)
    {
      m_top= nextnode;
    }
    delete(temp);

    return;
  }
  else
  {
    delete_node(val,temp->getnext());
  }


	return;
	//so much easier when you have the pointers pointing down
}
template <typename T>
void linkedlist<T>::reverse()
{
  reverse(m_top);

}
template <typename T>
void linkedlist<T>::reverse(node<T>* test)
{
  if(test->getnext()!= nullptr)
  {
     reverse(test->getnext());
   }
  else
    {
      m_top=test;
    }
  node<T>* previousnode= test->getprevious();
  test->setprevious(test->getnext());
  test->setnext(previousnode);
  return;

}
template <typename T>
void linkedlist<T>::print() const
{

	std::cout<<" List: "<<std::endl;


	Boxofanything<T>* temp=m_top;
	do
  {
  	std::cout<< temp->getvalue()<<" ";
  	temp=temp->getnext();
	}
	while(temp!=nullptr);
  std::std::cout <<  '\n';

	return;
}
