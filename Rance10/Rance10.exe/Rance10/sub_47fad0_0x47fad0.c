// 函数: sub_47fad0
// 地址: 0x47fad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t result = 0
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t result_1 = arg2

if (result_1 != arg3)
    void** esi_1 = *(arg1 + 0xc)
    
    while (true)
        void** eax_2 = esi_1[1]
        void** ecx = esi_1
        
        if (*(eax_2 + 0xd) == 0)
            do
                if (eax_2[4] s>= result_1)
                    ecx = eax_2
                    eax_2 = *eax_2
                else
                    eax_2 = eax_2[2]
            while (*(eax_2 + 0xd) == 0)
            
            if (ecx != esi_1 && result_1 s>= ecx[4])
                result_1 += 1
                
                if (result_1 == arg3)
                    break
                
                continue
        
        result = result_1
        break

LeaveCriticalSection(*(arg1 + 0x18) + 4)
return result
