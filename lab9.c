# include <stdio.h>

int is_empty(char *set)/*Bir kümenin boş olup olmadığını belirler*/
{
	
	if(*set == '\0')
	{
		return 1;
	}
 
		
		return 0;
  

}

int is_element(char element,char *set)/*Eğer verilen eleman kümenin elemanı ise 1 değilse 0 döndürür.*/

{
	if (1 == is_empty(set))
	{
		return 0;
	}
	printf("%c-%c\n", element, set[0] );
	if(set[0] == element)
	{
		
		return 1;
	}
	
	
	return is_element(element,&set[1]);
}

int is_set(char *set)/*Verilen dizinin küme olup olmadığını belirler.*/


{
	if (0 == is_empty(set))
	{
	   return 1;
    }	
    char a=set[0];
    set++;
    
	if ( is_element(a,set))
	{
	 return 0;

	}
	
	return is_set(set);
}

int is_subset(char *sub,char *set)/*Sub ile verilen kümenin setin alt kümesi olup olmadığını bulur.*/
{
	if(is_empty(sub) == 1)
    {
	return 1;
	}
  else if(is_element(sub[0],set))
  {
     return 0;
  }
  
  sub++;
  if(is_subset(sub,set) == 1)
  {
   return 1;
  }
  else  return 0;

}

int main()
{	
 
	char b[]="medeniyet";
	//printf("%d\n",is_empty(b));
	printf("***%d",is_element('m',b));
	return 0;
}
