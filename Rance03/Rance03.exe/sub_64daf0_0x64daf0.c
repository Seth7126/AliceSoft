// 函数: sub_64daf0
// 地址: 0x64daf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** result_1
int32_t eax_1 = __security_cookie ^ &result_1
void** result = arg2
bool cond:0 = result[5] u< 0x10
int32_t* result_2 = result
result[4] = 0

if (not(cond:0))
    result = *result

*result = nullptr

if (arg1[5] s> 0)
    RECT rect
    GetClientRect(*arg1[2], &rect)
    int32_t ecx_1 = arg1[7] + arg1[5]
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(rect.bottom - rect.top)
    int32_t ebp_1 = GetScrollPos(*arg1[2], SB_VERT)
    int32_t eax_9 = GetScrollPos(*arg1[2], SB_HORZ) * arg1[5]
    int32_t result_3 = divs.dp.d(edx_1:eax_5, ecx_1) + ebp_1
    result_1 = result_3
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = sx.q(eax_9)
    result = (*(*arg1 + 4))()
    
    if (result_3 s>= result)
        result = (*(*arg1 + 4))()
        result_3 = result
        result_1 = result
    
    if (ebp_1 s<= result_3)
        int32_t edi_1 = 0
        
        do
            result = sub_64dbe0(arg1, ebp_1, arg1[6] - ((eax_10 - edx_3) s>> 1), 
                (arg1[7] + arg1[5]) * edi_1, result_2)
            ebp_1 += 1
            edi_1 += 1
        while (ebp_1 s<= result_1)

sub_69a5bc(eax_1 ^ &result_1)
return result
