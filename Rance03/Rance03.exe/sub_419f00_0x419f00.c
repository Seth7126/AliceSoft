// 函数: sub_419f00
// 地址: 0x419f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = (*(*(arg1 + 0x14) + 0x10))()
int32_t* result = (*(*(arg1 + 0x14) + 0x14))()

if (ebx s<= 0 || result s<= 0)
    return result

int32_t eax_4 = sub_420d50(
    sub_420d50(result, 0, arg1 + 0x14, 0, ebx, result, (*(arg1 + 0xf4)).b, (*(arg1 + 0xf8)).b, 
        (*(arg1 + 0xfc)).b), 
    0, arg1 + 0x14, 0, ebx, 1, 0, 0, 0)
int32_t eax_6 = sub_420d50(
    sub_420d50(eax_4, 0, arg1 + 0x14, result - 1, ebx, 1, (*(arg1 + 0x10c)).b, (*(arg1 + 0x110)).b, 
        (*(arg1 + 0x114)).b), 
    0, arg1 + 0x14, 0, 1, result - 1, 0, 0, 0)
sub_420d50(eax_6, ebx - 1, arg1 + 0x14, 0, 1, result - 1, (*(arg1 + 0x10c)).b, (*(arg1 + 0x110)).b, 
    (*(arg1 + 0x114)).b)
sub_420d50(result - 2, 0, arg1 + 0x14, result - 2, ebx, 1, (*(arg1 + 0x10c)).b, 
    (*(arg1 + 0x110)).b, (*(arg1 + 0x114)).b)
int32_t eax_10 = (*(*(arg1 + 0x44) + 0x14))()
int32_t eax_11
int32_t* ecx_10
int32_t edx_3
eax_11, edx_3, ecx_10 = (*(*(arg1 + 0x44) + 0x10))()

if (ebx s> eax_11)
    eax_11, edx_3, ecx_10 = (*(*(arg1 + 0x44) + 0x10))()
    ebx = eax_11

int32_t var_18_2 = eax_10
int32_t var_1c_2 = ebx
return sub_420dc0(eax_11, edx_3, arg1 + 0x14, ecx_10, arg1 + 0x44)
