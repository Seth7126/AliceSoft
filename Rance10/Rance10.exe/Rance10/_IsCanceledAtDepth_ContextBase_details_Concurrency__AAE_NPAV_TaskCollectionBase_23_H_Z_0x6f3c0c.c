// 函数: ?IsCanceledAtDepth@ContextBase@details@Concurrency@@AAE_NPAV_TaskCollectionBase@23@H@Z
// 地址: 0x6f3c0c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 0x70) s<= 0 || *(arg1 + 0x68) s> arg3)
label_6f3cca:
    result.b = 0
else if (*(arg1 + 0x3c) == 0xffffffff || *(arg1 + 0x68) s>= *(arg1 + 0x3c))
label_6f3cf2:
    result.b = 1
else
    result = *(arg1 + 0x34)
    int32_t i = arg2
    
    if (i != result || arg3 != *(result + 4) << 4 s>> 4)
        while (i != *(arg1 + 0x30))
            if (*(i + 4) << 4 s>> 4 == arg3)
                break
            
            i = Concurrency::details::_TaskCollectionBase::_SafeGetParent(i)
            
            if (i == 0)
                break
        
        while (true)
            if (i == 0)
                goto label_6f3cca_1
            
            if (i != *(arg1 + 0x30)
                    && Concurrency::details::_TaskCollectionBase::_GetTokenState(i, nullptr) == 0)
                result.b = (*(i + 4) s>> 0x1c).b & 1
                
                if (result.b != 0 && (*(i + 0x18) & 3) != 0)
                    goto label_6f3cf2
                
                if (result.b == 0
                        && Concurrency::details::_TaskCollection::_IsMarkedForAbnormalExit(i).b
                        != 0)
                    goto label_6f3cf2
                
                i = Concurrency::details::_TaskCollectionBase::_SafeGetParent(i)
                continue
            
            if (i == 0)
                goto label_6f3cca_1
            
            if (i == *(arg1 + 0x30))
                goto label_6f3cca_1
            
            result = Concurrency::details::_TaskCollectionBase::_GetTokenState(i, nullptr)
            
            if (result == 2)
                goto label_6f3cca_1
            
            break
        
        result.b = *(result + 8) != 0
    else
        void* ecx = *(arg1 + 0x38)
        
        if (ecx == 2)
        label_6f3cca_1:
            result.b = 0
        else
            result.b = *(ecx + 8) != 0

return result
