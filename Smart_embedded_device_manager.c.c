// smart embedded device manager

#include <stdio.h>

struct Device
{
	int id;
	char name[30];
	char type[20];
	int status;
	float temprature;
	float voltage;
};

int main()
{
	struct Device d1;
	
	printf("---SMART EMBEDDED DEVICE MANAGER---\n\n");
	
	printf("Enter Device ID:");
	scanf("%d", &d1.id);
	
	printf("Enter Device Name:");
	scanf("%s", &d1.name);
	
	printf("Enter Device Status(1 = ON, 0 = OFF):");
	scanf("%d", &d1.status);
	
	printf("Enter Device Temperature:");
	scanf("%f", &d1.temprature);
	
	printf("Enter Device Type:");
	scanf("%s", &d1.type);
	
	printf("Enter Device Voltage:");
	scanf("%f", &d1.voltage);

    printf("\n---DEVICE INFORMATION---\n");
    
    printf("Device ID  :%d\n", d1.id);
    printf("Device Name :%s\n", d1.name);
    printf("Device Type :%s\n", d1.type);
    
    if(d1.status == 1)
     printf("Status :ON\n");
    else
     printf("Status :OFF\n");
     
     printf("Temperature :%.2f C\n", d1.temprature);
     printf("Voltage  :%.2f V\n", d1.voltage);
     	
	return 0;
}
