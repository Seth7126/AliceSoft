// 函数: sub_696210
// 地址: 0x696210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_4 = arg1
int32_t* ecx = *(arg1 + 0x1c)

if (ecx == 0)
    int32_t eax
    eax.b = 0
    return eax

void* ebx = (*(*ecx + 0x24))()

if (ebx == 0xffffffff)
    void* eax_2
    eax_2.b = 0
    return eax_2

int32_t* ecx_3 = *(arg1 + 0x1c)
void* eax_4 = arg5 - ebx
void* ebp = arg3
void* edi = ebp
var_4 = nullptr

if (eax_4 u< ebp)
    edi = eax_4

if ((*(*ecx_3 + 0x14))(arg2, edi, &var_4) != 0)
    while (var_4 == edi)
        uint32_t (* eax_8)[0x4] = arg5
        ebx += edi
        
        if (ebx u< eax_8)
        label_6962ad:
            void* temp1_1 = ebp
            ebp -= edi
            arg3 = ebp
            
            if (temp1_1 != edi)
                arg2 += edi
                int32_t* ecx_5 = *(arg1 + 0x1c)
                void* eax_12 = eax_8 - ebx
                var_4 = nullptr
                edi = ebp
                
                if (eax_12 u< ebp)
                    edi = eax_12
                
                if ((*(*ecx_5 + 0x14))(arg2, edi, &var_4) == 0)
                    break
                
                continue
        else
            int32_t eax_9 = *(arg1 + 0x24)
            
            if (eax_9 s> 0)
                *(arg1 + 0x28) += 1
            
            if (eax_9 s<= 0 || *(arg1 + 0x28) s< eax_9)
                if ((*(**(arg1 + 0x1c) + 0x18))(arg4) == 0)
                    break
                
                ebx = arg4
                ebp = arg3
                eax_8 = arg5
                goto label_6962ad
            
            if (arg3 != edi)
                _memset(arg2 + edi, 0, arg3 - edi)
        
        eax_8.b = 1
        return eax_8

return 0
