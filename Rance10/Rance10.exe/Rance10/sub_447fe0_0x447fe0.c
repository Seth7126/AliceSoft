// 函数: sub_447fe0
// 地址: 0x447fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t eax_1 = sub_449ae0(arg1 + 0x28, sub_4365c0(edi))
edi[1] += eax_1
uint32_t eax_3 = *(arg1 + 0x28) u>> 3
uint32_t result

if ((eax_3.b & 1) == 0)
label_44803b:
    uint32_t eax_5 = *(arg1 + 0x28) u>> 2
    
    if ((eax_5.b & 1) == 0)
    label_448072:
        int32_t eax_6 = *(arg1 + 0x28)
        
        if ((eax_6.b & 0xc) == 0)
            *(arg1 + 0x18) = 0
            *(arg1 + 0x1c) = 0
            *(arg1 + 0x20) = 0
            *(arg1 + 0x24) = 0
        
        uint32_t ebp_3 = 0
        arg2 = 0
        
        if (((eax_6 u>> 1).b & 1) != 0)
            sub_449970(&arg2, edi)
            ebp_3 = arg2
        
        if (((*(arg1 + 0x28) u>> 4).b & 1) != 0)
            int32_t eax_10 = edi[1]
            uint32_t ecx_8 = eax_10 u>> 3
            int32_t eax_11 = eax_10 & 7
            
            if (eax_11 == 0)
                arg2 = 0
            else
                arg2 = zx.d(*(**edi + ecx_8 + 1))
            
            uint32_t edx_6 = zx.d(*(**edi + ecx_8))
            edi[1] += 5
            *(arg1 + 8) = zx.d(((edx_6 << 8 | arg2) s>> (8 - eax_11.b)).b) u>> 3
        
        if (sub_449900(arg1 + 0x2c, edi).b != 0)
            _memset(arg1 + 0x30, 0, 0x300)
            
            if ((*(arg1 + 0x28) & 1) == 0)
                *(arg1 + 0xc) = 0x80
                *(arg1 + 0x10) = 0x80
                *(arg1 + 0x14) = 0x80
                result = sub_448270(arg1, edi, ebp_3)
                
                if (result.b == 0)
                    return result
                
                result.b = 1
                return result
            
            if (sub_448180(arg1, edi).b != 0)
                result.b = 1
                return result
    else
        result = sub_4497d0(eax_5, edi, arg1 + 0x20, arg4)
        
        if (result.b != 0 && sub_4497d0(result, edi, arg1 + 0x24, arg4).b != 0)
            goto label_448072
else
    result = sub_4497d0(eax_3, edi, arg1 + 0x18, arg3)
    
    if (result.b != 0 && sub_4497d0(result, edi, arg1 + 0x1c, arg3).b != 0)
        goto label_44803b

result.b = 0
return result
