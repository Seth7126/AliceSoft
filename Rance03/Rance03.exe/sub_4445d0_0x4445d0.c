// 函数: sub_4445d0
// 地址: 0x4445d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(*(arg1 + 0xc) + (arg2 << 1)) = *(*(arg4 + 0xc) + ((arg2 + arg5) << 1))
int32_t ebx_1 = arg2 + arg3
*(*(arg1 + 0xc) + (ebx_1 << 1)) = *(*(arg4 + 0xc) + ((ebx_1 + arg5) << 1))
int32_t ebx_2 = ebx_1 + arg3
*(*(arg1 + 0xc) + (ebx_2 << 1)) = *(*(arg4 + 0xc) + ((ebx_2 + arg5) << 1))
int32_t ebx_3 = ebx_2 + arg3
*(*(arg1 + 0xc) + (ebx_3 << 1)) = *(*(arg4 + 0xc) + ((ebx_3 + arg5) << 1))
int32_t ebx_4 = ebx_3 + arg3
*(*(arg1 + 0xc) + (ebx_4 << 1)) = *(*(arg4 + 0xc) + ((ebx_4 + arg5) << 1))
int32_t ebx_5 = ebx_4 + arg3
*(*(arg1 + 0xc) + (ebx_5 << 1)) = *(*(arg4 + 0xc) + ((ebx_5 + arg5) << 1))
int32_t ebx_6 = ebx_5 + arg3
*(*(arg1 + 0xc) + (ebx_6 << 1)) = *(*(arg4 + 0xc) + ((ebx_6 + arg5) << 1))
int32_t ebx_7 = ebx_6 + arg3
int32_t result = *(arg1 + 0xc)
*(result + (ebx_7 << 1)) = *(*(arg4 + 0xc) + ((ebx_7 + arg5) << 1))
return result
