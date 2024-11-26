int marks;
  printf("enter the marks\n");
  scanf("%d",&marks);
  if(marks>=90)
  {
      printf(" Grade A");
  }
    else if(marks>=70)
    {
      printf(" Grade B");
    }
  else if(marks>=35)
  {
    printf(" Grade C");
  }
  else
  {
    printf("fail");
  }
  return 0;
}

