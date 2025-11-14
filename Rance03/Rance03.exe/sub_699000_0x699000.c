// 函数: sub_699000
// 地址: 0x699000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edx = data_75dd14
int32_t* i = arg2

if (i == *edx && arg3 == edx)
    sub_6990a0()
    *arg1 = *data_75dd14
    return arg1

for (; i != arg3; i = arg2)
    int32_t* i_1 = i
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            i_2 = i[1]
            
            if (*(i_2 + 0xd) == 0)
                while (i == i_2[2])
                    i = i_2
                    arg2 = i
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0xd) != 0)
                        break
        else
            int32_t* i_3 = *i_2
            
            while (*(i_3 + 0xd) == 0)
                i_2 = i_3
                i_3 = *i_2
        
        arg2 = i_2
    
    int32_t __saved_ecx
    sub_698c60(&__saved_ecx, i_1)

*arg1 = i
return arg1
