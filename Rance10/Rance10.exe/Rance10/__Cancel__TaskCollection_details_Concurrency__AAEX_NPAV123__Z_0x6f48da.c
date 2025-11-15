// 函数: ?_Cancel@_TaskCollection@details@Concurrency@@AAEX_NPAV123@@Z
// 地址: 0x6f48da
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t esi = arg1
int32_t* eax = Concurrency::details::_TaskCollection::_Alias(arg1)
char result = Concurrency::details::_TaskCollection::_SetCancelState(esi, 1)

if (result == 0)
    return result

char edi_1

if (Concurrency::details::_TaskCollection::_IsIndirectAlias(eax) != 0 || eax == esi)
    while (true)
        int32_t edi_2 = *(esi + 0x38)
        
        if (edi_2 != 1 && edi_2 != 5)
            int32_t eax_2 = 0
            
            if (0 == *(esi + 0x38))
                *(esi + 0x38) = 3
            else
                eax_2 = *(esi + 0x38)
            
            if (eax_2 == edi_2)
                break
            
            continue
        
        void* ecx_5 = *(esi + 0xc)
        Concurrency::details::ContextBase::CancelCollection(ecx_5, *(esi + 4) << 4 s>> 4)
        
        if (edi_2 == 5)
            Concurrency::details::_TaskCollection::_AbortiveSweep(esi, ecx_5)
        
        *(esi + 0x38)
        *(esi + 0x38) = 4
    
    edi_1 = arg2
    int32_t var_18_1 = 1
    Concurrency::details::_TaskCollection::_CancelStolenContexts(esi, edi_1)
else
    edi_1 = arg2
    Concurrency::details::_TaskCollection::_CancelFromArbitraryThread(esi, edi_1)

return Concurrency::details::_TaskCollection::_CancelDirectAliases(edi_1, arg3)
