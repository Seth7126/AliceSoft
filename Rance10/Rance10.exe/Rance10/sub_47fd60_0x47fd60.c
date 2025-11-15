// 函数: sub_47fd60
// 地址: 0x47fd60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t* edi = *(arg1 + 0xc)
int32_t* i = *edi

while (i != edi)
    void** ecx = i[5]
    
    if (ecx != 0)
        void** var_10_1 = ecx
        sub_4812d0(ecx, i[4])
    
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

return LeaveCriticalSection(*(arg1 + 0x18) + 4) __tailcall
