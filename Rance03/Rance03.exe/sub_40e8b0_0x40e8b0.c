// 函数: sub_40e8b0
// 地址: 0x40e8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4_1 = arg1
int32_t* edx = arg4[5]
int32_t* esi = arg4[4]
*(arg1 + 0x70) = 0
int32_t* edi = sub_40eb70(esi, arg2)
int32_t* result
char arg_10

if (edi s>= 0)
    if (arg_10 == 0)
    label_40e8f9:
        int32_t* ebx_1 = (*(*esi + 4))(edi)
        
        if (ebx_1 != 0)
            int32_t* ebp_1 = (*(*ebx_1 + 0x18))()
            
            if (ebp_1 != 0)
                arg_10.d = arg3 << 2
                result = (*(*ebx_1 + 0x14))()
                int32_t* ecx_5 = arg_10.d
                
                if (ecx_5 s< result)
                    arg_10.d = *(ecx_5 + ebp_1)
                    return sub_40e960(arg1, &arg_10, edi, arg3, edx, esi)
    else
        edi = (*(*esi + 0x3c))(edi)
        
        if (edi s>= 0)
            goto label_40e8f9
result.b = 0
return result
