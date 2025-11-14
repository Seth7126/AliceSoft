// 函数: sub_457dc0
// 地址: 0x457dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* i = arg3
int32_t* ecx = *arg1

if (i == *ecx && arg4 == ecx)
    sub_4583e0(ecx[1])
    void* eax = *arg1
    *(eax + 4) = eax
    int32_t* eax_1 = *arg1
    *eax_1 = eax_1
    void* eax_2 = *arg1
    *(eax_2 + 8) = eax_2
    int32_t* eax_3 = *arg1
    arg1[1] = 0
    *arg2 = *eax_3
    return arg2

for (; i != arg4; i = arg3)
    int32_t* i_1 = i
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            i_2 = i[1]
            
            if (*(i_2 + 0xd) == 0)
                while (i == i_2[2])
                    i = i_2
                    arg3 = i
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0xd) != 0)
                        break
        else
            int32_t* i_3 = *i_2
            
            while (*(i_3 + 0xd) == 0)
                i_2 = i_3
                i_3 = *i_2
        
        arg3 = i_2
    
    sub_4580f0(arg1, &var_4, i_1)

*arg2 = i
return arg2
