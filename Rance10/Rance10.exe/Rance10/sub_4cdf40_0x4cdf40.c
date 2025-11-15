// 函数: sub_4cdf40
// 地址: 0x4cdf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t* var_14 = arg2
void* var_18 = arg1
sub_417d50(*ebx, ebx[1])
ebx[1] = *ebx
int32_t* edi = *(arg1 + 0x3c)
int32_t* i = *edi

while (i != edi)
    sub_424db0(ebx, &i[4])
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            int32_t* i_4 = i[1]
            
            if (*(i_4 + 0xd) == 0)
                while (i == i_4[2])
                    i = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0xd) != 0)
                        break
            
            i = i_4
        else
            i = i_2
            int32_t* i_3 = *i
            
            while (*(i_3 + 0xd) == 0)
                i = i_3
                i_3 = *i

void** esi = *(arg1 + 0x44)
int32_t* i_1 = *esi
arg2 = i_1

for (; i_1 != esi; i_1 = arg2)
    sub_424db0(ebx, &i_1[4])
    sub_429080(&arg2)

return i_1
