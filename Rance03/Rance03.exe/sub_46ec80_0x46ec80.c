// 函数: sub_46ec80
// 地址: 0x46ec80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg3 + 0x18) + 4)
int32_t* edi = *(arg3 + 0xc)
int32_t* i = *edi

while (i != edi)
    void* ecx = i[5]
    
    if (ecx != 0)
        sub_46fc70(ecx, i[4], arg4)
    
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

return LeaveCriticalSection(*(arg3 + 0x18) + 4) __tailcall
