// 函数: ?RecomputeMaximumCancellationDepth@ContextBase@details@Concurrency@@AAEXXZ
// 地址: 0x6f3ddd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t result_3 = *(arg1 + 0x6c)
*(arg1 + 0x6c) = 0xffffffff
int32_t result = result_3
int32_t esi = *(arg1 + 0x74)
int32_t result_2 = *(arg1 + 0x34)
int32_t esi_1 = neg.d(esi)
int32_t esi_4 = (sbb.d(esi_1, esi_1, esi != 0) & 0xfffffc1a) - 1

while (true)
    if (result_2 == 0)
        break
    
    if (result_2 == *(arg1 + 0x30))
        break
    
    result.b = (*(result_2 + 4) s>> 0x1c).b & 1
    
    if (result.b == 0 || (*(result_2 + 0x18) & 3) == 0)
        if (result.b != 0)
        label_6f3e2a:
            result = Concurrency::details::_TaskCollectionBase::_SafeGetParent(result_2)
            result_2 = result
            continue
        else
            result = Concurrency::details::_TaskCollection::_IsMarkedForAbnormalExit(result_2)
            
            if (result.b == 0)
                goto label_6f3e2a
    
    esi_4 = *(result_2 + 4) << 4 s>> 4
    break

int32_t result_1 = 0xffffffff

while (result_1 == 0xffffffff || esi_4 s>= result_1)
    result = result_1
    
    if (result == *(arg1 + 0x6c))
        *(arg1 + 0x6c) = esi_4
    else
        result = *(arg1 + 0x6c)
    
    if (result == result_1)
        break
    
    result_1 = result

return result
