// 函数: sub_5279d0
// 地址: 0x5279d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &partsengine::CRandManager::`vftable'
int32_t* edi = arg1[3]
int32_t* i = *edi
int32_t var_8

while (i != edi)
    int32_t var_1c_1 = 0x830
    int32_t var_20_1 = i[5]
    var_8 = i[4]
    operator new(var_20_1)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

void* ecx = arg1[5]

if (ecx != 0)
    sub_403160(ecx, (arg1[7] - ecx) s>> 2, 4)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t** eax_5 = arg1[3]
sub_4346e0(&arg1[3], &var_8, *eax_5, eax_5)
return sub_403160(arg1[3], 1, 0x18)
