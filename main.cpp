#include "singlylinkedlist.h"
#include "doublylinkedlist.h"
#include "stack.h"
#include "queue.h"
#include "bst.h"
#include <iostream>

using namespace std;

int main()
{
    string input;
    string type;
    string choice;
    string terminate[256];
    string x;
    int b;
    int v;
    int i;

    while(input !="Quit"){

            cout<<"***********************************************************************"<<endl;
            cout<<"***********************************************************************"<<endl;
            cout<<"** Welcome To Tristans Lab Exam Code, Please Choose A Data Structure **"<<endl;
            cout<<"** to implement from the list below:                                 **"<<endl;
            cout<<"** a)LinkedList                                                      **"<<endl;
            cout<<"** b)Stack                                                           **"<<endl;
            cout<<"** c)Queue                                                           **"<<endl;
            cout<<"** d)BST                                                             **"<<endl;
            cout<<"** or Quit to end programme                                          **"<<endl;
            cout<<"***********************************************************************"<<endl;
            cout<<"***********************************************************************"<<endl;
            cin>>input;

            if(input == "LinkedList"){
                cout<<"You Chose A Linked List"<<endl;
                cout<<""<<endl;

                while(type != "Back"){

                cout<<"Singly or Doubly?"<<endl;
                cout<<"or Back to return to previous menu"<<endl;

                    cin>>type;

                    if(type == "Singly"){
                        cout<<"You Chose Singly"<<endl;
                        cout<<""<<endl;
                        SinglyLinkedList list;

                        while(choice !="Back"){

                            cout<<"Please Choose A Task from the list below:"<<endl;
                            cout<<"a)Insert"<<endl;
                            cout<<"b)Delete"<<endl;
                            cout<<"c)Print"<<endl;
                            cout<<"or Back to return to previous menu"<<endl;
                            cin>>choice;

                            if(choice == "Insert"){
                                cout<<"Front, Back or Index?"<<endl;

                                cin>>x;

                                if(x == "Front"){
                                    cout<<"Please Provide Value to Insert To Front:"<<endl;
                                    cin>>v;

                                    list.push_front(v);
                                    cout<<"Value "<<v<<" has been inserted to front"<<endl;
                                }
                                if(x == "Back"){
                                    cout<<"Please Provide Value to Insert To Back:"<<endl;
                                    cin>>v;

                                    list.push_back(v);
                                    cout<<"Value "<<v<<" has been inserted to Back"<<endl;
                                }
                                if(x == "Index"){
                                    cout<<"Please Provide Index to Insert At:"<<endl;
                                    cin>>i;
                                    cout<<"Please Provide Value to Insert At Index"<<endl;
                                    cin>>v;

                                    list.insertItem(i,v);
                                    cout<<"Value "<<v<<" has been inserted to Back"<<endl;
                                }
                            }
                            if(choice == "Delete"){
                                cout<<"Front, Back or Index"<<endl;

                                cin>>x;

                                if(x=="Front"){
                                    list.pop_front();
                                    cout<<"Front Value Deleted"<<endl;
                                }
                                if(x=="Back"){
                                    list.pop_back();
                                    cout<<"Back Value Deleted"<<endl;
                                }
                                if(x=="Index"){
                                    cout<<"Please Provide Index To Delete"<<endl;
                                    cin>>i;

                                    list.deleteItem(i);
                                    cout<<"Value At Index "<<i<<" Deleted"<<endl;
                                }
                            }
                            if(choice == "Print"){
                                cout<<"Front, Back, List or Link?"<<endl;

                                cin>>x;

                                if(x=="Front"){
                                    list.front();
                                    cout<<"Front Value is "<<list.front()<<endl;
                                }
                                if(x=="Back"){
                                    list.back();
                                    cout<<"Back Value is "<<list.back()<<endl;
                                }
                                if(x=="List"){
                                    list.print_list();
                                }
                                if(x=="Link"){
                                    cout<<"Please Provide Index To Print"<<endl;
                                    cin>>i;

                                    list.get_link(i);
                                    cout<<"Value At "<<i<<" is "<<list.get_link(i)<<endl;
                                }
                            }
                        }
                    }
                    if(type == "Doubly"){
                        cout<<"You Chose Doubly"<<endl;
                        cout<<""<<endl;
                        DoublyLinkedList list;

                        while(choice !="Back"){

                            cout<<"Please Choose A Task from the list below:"<<endl;
                            cout<<"a)Insert"<<endl;
                            cout<<"b)Delete"<<endl;
                            cout<<"c)Print"<<endl;
                            cout<<"or Back to return to previous menu"<<endl;
                            cin>>choice;

                            if(choice == "Insert"){
                                cout<<"Please Provide Value To Insert"<<endl;
                                cin>>v;

                                cout<<"Value "<<v<<" Has Been Inserted"<<endl;
                            }
                            if(choice == "Delete"){
                                cout<<"Please Provide Index To Delete"<<endl;
                                cin>>i;

                                list.deleteItem(i);
                                cout<<"Value At Index "<<i<<" Deleted"<<endl;
                            }
                            if(choice == "Print"){
                                list.print_list();
                            }
                        }
                    }
                }
            }

            if(input == "Stack"){
                cout<<"You Chose A Stack"<<endl;
                cout<<""<<endl;
                Stack s;

                while(choice!="Back"){
                    cout<<"Please Choose A Task from the list below:"<<endl;
                    cout<<"a)Push"<<endl;
                    cout<<"b)Pop"<<endl;
                    cout<<"c)Size"<<endl;
                    cout<<"or Back to return to previous menu"<<endl;
                    cin>>choice;

                    if(choice=="Push"){
                        cout<<"Please Provide Value You Would Like To Push Onto The Stack"<<endl;
                        cin>>v;

                        s.push(v);
                        cout<<"Value "<<v<<" Has Been Pushed Onto The Stack";
                    }
                    if(choice=="Pop"){
                        s.pop();
                        cout<<"Value "<<s.pop()<<" Has Been Popped Off The Stack"<<endl;
                    }
                    if(choice=="Size"){
                        s.size();
                        cout<<"Size of Stack is "<<s.size()<<endl;
                    }
                }
            }

            if(input == "Queue"){
                cout<<"You Chose A Queue"<<endl;
                cout<<""<<endl;
                Queue q;

                while(choice!="Back"){
                    cout<<"Please Choose A Task from the list below:"<<endl;
                    cout<<"a)Enqueue"<<endl;
                    cout<<"b)Dequeue"<<endl;
                    cout<<"or Back to return to previous menu"<<endl;
                    cin>>choice;

                    if(choice=="Enqueue"){
                        cout<<"Please Provide Value You Would Like To Enqueue Onto The Queue"<<endl;
                        cin>>v;

                        q.enqueue(v);
                        cout<<"Value "<<v<<" Has Been Enqueued Onto The Queue"<<endl;
                    }
                    if(choice=="Dequeue"){
                        q.dequeue();
                        cout<<"Value "<<q.dequeue()<<" Has Been Dequeue Off The Queue"<<endl;
                    }
                }
            }

            if(input == "BST"){
                cout<<"You Chose A Binary Search Tree"<<endl;
		cout<<""<<endl;
		Tree t;

		cout<<"Lets Create Your BST"<<endl;
		cout<<"Please Enter Values To Create The BST"<<endl;
		cout<<"Type One Value At A Time Followed By Enter To Add It To The BST"<<endl;
		cout<<"When You Have Provided All Values For The BST, Type End For More Options"<<endl;
		
		std::string input;
getline(cin, input);
std::istringstream iss(input);
int temp;
while(iss >> temp)
{
   t.insert(temp);
}
		
		

		while(choice!="Back"){
                    cout<<"Please Choose A Task from the list below:"<<endl;
                    cout<<"a)Traversal"<<endl;
                    cout<<"b)Insert"<<endl;
		    cout<<"c)Find"<<endl;
                    cout<<"or Back to return to previous menu"<<endl;
                    cin>>choice;

		    if(choice=="Traversal"){
                        cout<<"Preorder, Inorder or Postorder?"<<endl;
			cin>>x;

			if(x == "Preorder"){
				t.preOrderTraversal();			
			}
			if(x == "Inorder"){
				t.inOrderTraversal();			
			}
			if(x == "Postorder"){
				t.postOrderTraversal();			
			}
                    }
		    if(choice=="Insert"){
			cout<<"Please Provide A Value To Insert"<<endl;
			cin>>v;

			t.insert(v);
			cout<<"Value "<<v<<" Has Been Inserted"<<endl;
		    }
		   if(choice=="Find"){
			cout<<"Please Provide A Value To Find"<<endl;
			cin>>v;

			t.contains(v);
			if(t.contains(v) == true){
				cout<<"Value "<<v<<" is in The Tree"<<endl;
			}else{
				cout<<"Value "<<v<<" is not in The Tree"<<endl;
			}
		   }

            }
	}
}
return 0;
}


