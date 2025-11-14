// 函数: sub_446380
// 地址: 0x446380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* edi = arg2
sub_447a60(arg1 + 0x28, edi)
uint32_t eax_1 = *(arg1 + 0x28) u>> 3
int32_t result

if ((eax_1.b & 1) == 0)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
label_4463f0:
    void* ebp_2 = nullptr
    uint8_t eax_3 = (*(arg1 + 0x28) u>> 1).b
    arg2 = nullptr
    
    if ((eax_3 & 1) != 0)
        sub_447ac0(&arg2, edi)
        ebp_2 = arg2
    
    if (((*(arg1 + 0x28) u>> 4).b & 1) != 0)
        int32_t eax_6 = sub_443540(edi, 5)
        *(edi + 8) += 5
        *(arg1 + 8) = eax_6
    
    if (sub_4478d0(arg1 + 0x2c, edi).b != 0)
        _memset(arg1 + 0x30, 0, 0x300)
        
        if ((*(arg1 + 0x28) & 1) != 0)
            result = sub_446490(arg1, edi)
            
            if (result.b == 0)
                return result
            
            result.b = 1
            return result
        
        *(arg1 + 0xc) = 0x80
        *(arg1 + 0x10) = 0x80
        *(arg1 + 0x14) = 0x80
        
        if (sub_4467a0(arg1, edi, ebp_2).b != 0)
            result.b = 1
            return result
else
    result = sub_4477c0(eax_1, edi, arg1 + 0x18, arg3)
    
    if (result.b != 0 && sub_4477c0(result, edi, arg1 + 0x1c, arg3).b != 0)
        goto label_4463f0

result.b = 0
return result
