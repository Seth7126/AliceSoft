// 函数: sub_436470
// 地址: 0x436470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg4

if (i == arg5)
    *arg3 = i
    return arg3

do
    if (i[5] == *arg2[1] * 0x30 + 0x444 + *arg2)
        break
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    arg4 = i
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
        
        arg4 = i
while (i != arg5)

*arg3 = i
return arg3
