// 函数: ?_Abort@_TaskCollection@details@Concurrency@@AAEX_N@Z
// 地址: 0x6f4684
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
void* ebx = *(arg1 + 0x6c)
void* var_10 = ebx
void* eax_1 = Concurrency::details::_TaskCollection::_IsIndirectAlias(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** result_1

if (eax_1.b == 0)
    result_1 = *(*(arg1 + 0x64) + 0x68)
else
    result_1 = nullptr

if (ebx != 0)
    eax_1.b = *(ebx + 0xc)

if (ebx != 0 && eax_1.b != 0)
    Concurrency::details::_TaskCollection::_AbortiveSweep(arg1, eax)
    *(ebx + 0xc) = 0
else
    while (*(arg1 + 0x84) s> 0)
        int32_t eax_2 = *(arg1 + 0x84)
        int32_t eax_4
        
        if (eax_2 u<= 2)
            eax_4 = *(arg1 + (eax_2 << 2) + 0x6c)
        else
            *(ebx + 4) -= 1
            eax_4 = *(*(ebx + 8) + (*(ebx + 4) << 2))
        
        *(arg1 + 0x84) -= 1
        int32_t var_20_2 = eax_4
        int32_t* eax_5 = Concurrency::details::ContextBase::TryPopUnstructured(eax)
        
        if (eax_5 == 0)
            break
        
        if (eax_5 != 1)
            void* eax_6 = *(eax + 0x9c)
            
            if (*(eax + 0x4c) == 0)
                *(eax_6 + 0x6c) += 1
            else
                *(eax_6 + 0xc) += 1
            
            eax_5[2] = 0
            sub_6f4cf2(arg1, eax_5)

ebx.b = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

while (true)
    char eax_7
    
    if (ebx.b == 0 && *(arg1 + 0x10) s<= 0)
        eax_7 = Concurrency::details::_TaskCollection::_IsDirectAlias(arg1)
    
    if (ebx.b != 0 || *(arg1 + 0x10) s> 0 || eax_7 != 0 || result_1 != 0)
        Concurrency::details::_TaskCollection::_Cancel(*(arg1 + 0x64), 0, result_1)
    
    sub_6f4b20(arg1, result_1)
    
    if (Concurrency::details::_TaskCollection::_IsIndirectAlias(arg1) == 0)
        result = *(*(arg1 + 0x64) + 0x68)
    else
        result = nullptr
    
    if (result_1 == result)
        break
    
    result_1 = result

*(arg1 + 0x84) = 0

if (var_10 != 0)
    *(var_10 + 4) = 0

if (arg2 != 0)
    return result

return Concurrency::details::_TaskCollection::_Reset(arg1, result_1)
