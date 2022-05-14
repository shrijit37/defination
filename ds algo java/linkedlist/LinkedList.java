public class LinkedList {
  
    Node head;
    public void insert(int data)
    {
        Node node = new Node();
        node.data=data;
        node.next=null;
        if(head==null)
        {
            head=node;
        }
        else
        {
            Node n = head;
            while(n.next!=null)
            {
                n=n.next;
            }
            n.next=node;
        }

    }
    

    public void insertatstart(int data)
    {
        Node node = new Node();
        node.data=data;
        if(head==null)
        {
            head=node;
        }
        else
        {
            node.next=head;
            head=node;
        }
    }

    public void print()
    {
        Node cur = head;
        while(cur!=null)
        {
            System.out.println(cur.data);
            cur=cur.next;
        }

    }
}
