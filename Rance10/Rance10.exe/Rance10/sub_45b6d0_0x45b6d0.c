// 函数: sub_45b6d0
// 地址: 0x45b6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (sub_45b7a0(arg1, arg3, arg4).b != 0)
    result = *(arg1 + 4)
    
    if (result != 8)
        if (result == 0x18)
            result = (*(*arg5 + 0xc))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
            
            if (result != 0)
                goto label_45b74a
            
            result.b = 0
            return result
        
        if (result == 0x20)
            result = (*(*arg5 + 8))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
            
            if (result != 0)
                goto label_45b74a
            
            result.b = 0
            return result
    else
        result = (*(*arg5 + 0x10))(*(arg1 + 8), *(arg1 + 0xc))
        
        if (result != 0)
        label_45b74a:
            *(arg2 + 8) = result
            int32_t ecx_3 = *(arg1 + 4)
            
            if (ecx_3 != 8)
                if (ecx_3 == 0x18)
                    result = sub_45b840(arg1, result)
                    goto label_45b75d
                
                if (ecx_3 == 0x20)
                    result = sub_45b900(arg1, result)
                    goto label_45b75d
            else
                result = sub_45b9a0(arg1, result)
            label_45b75d:
                
                if (result.b == 0)
                    return result
            
            *(arg2 + 0xc) = 0
            result.b = 1
            *(arg2 + 0x10) = 0
            return result

result.b = 0
return result
