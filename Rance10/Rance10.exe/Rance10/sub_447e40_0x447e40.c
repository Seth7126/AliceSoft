// 函数: sub_447e40
// 地址: 0x447e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
uint32_t eax = sub_4365c0(edi)
int32_t eax_1

if (eax s>= 0)
    *(arg1 + 0x28) = 0xa
    eax_1 = 1
else if ((eax & 0x40000000) == 0)
    *(arg1 + 0x28) = 2
    eax_1 = 2
else if ((eax & 0x20000000) == 0)
    *(arg1 + 0x28) = 8
    eax_1 = 3
else
    eax_1 = sub_449ca0(arg1 + 0x28, eax)

edi[1] += eax_1
uint32_t eax_3 = *(arg1 + 0x28) u>> 3
uint32_t result

if ((eax_3.b & 1) == 0)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
label_447ef4:
    uint32_t ebp_2 = 0
    uint8_t eax_5 = (*(arg1 + 0x28) u>> 1).b
    arg2 = 0
    
    if ((eax_5 & 1) != 0)
        sub_449970(&arg2, edi)
        ebp_2 = arg2
    
    if (((*(arg1 + 0x28) u>> 4).b & 1) != 0)
        int32_t eax_8 = edi[1]
        uint32_t ecx_6 = eax_8 u>> 3
        int32_t eax_9 = eax_8 & 7
        
        if (eax_9 == 0)
            arg2 = 0
        else
            arg2 = zx.d(*(**edi + ecx_6 + 1))
        
        uint32_t edx_5 = zx.d(*(**edi + ecx_6))
        edi[1] += 5
        *(arg1 + 8) = zx.d(((edx_5 << 8 | arg2) s>> (8 - eax_9.b)).b) u>> 3
    
    if (sub_449900(arg1 + 0x2c, edi).b != 0)
        _memset(arg1 + 0x30, 0, 0x300)
        
        if ((*(arg1 + 0x28) & 1) != 0)
            result = sub_448180(arg1, edi)
            
            if (result.b == 0)
                return result
            
            result.b = 1
            return result
        
        *(arg1 + 0xc) = 0x80
        *(arg1 + 0x10) = 0x80
        *(arg1 + 0x14) = 0x80
        
        if (sub_448270(arg1, edi, ebp_2).b != 0)
            result.b = 1
            return result
else
    result = sub_4497d0(eax_3, edi, arg1 + 0x18, arg3)
    
    if (result.b != 0 && sub_4497d0(result, edi, arg1 + 0x1c, arg3).b != 0)
        goto label_447ef4

result.b = 0
return result
