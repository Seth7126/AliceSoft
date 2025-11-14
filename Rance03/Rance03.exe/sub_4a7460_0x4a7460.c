// 函数: sub_4a7460
// 地址: 0x4a7460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax
int32_t ecx_1
eax, ecx_1 = sub_4a43d0(*(arg1 + 4))
void* ebx = *(arg1 + 0xa0)

if (ebx != eax)
    if (ebx != 0)
        int32_t var_10_1 = ecx_1
        sub_485ca0(ebx + 8)
        ecx_1 = (*(**(ebx + 0x5c) + 0x44))()
    
    if (eax != 0)
        int32_t var_10_2 = ecx_1
        sub_485c60(eax + 8)
        (*(**(eax + 0x5c) + 0x40))()
    
    *(arg1 + 0xa0) = eax

sub_4a33c0(*(arg1 + 4), arg2, arg3, arg4)
int32_t result = sub_4a7500(arg5, arg6)

for (int32_t* i = *arg6; i != arg6[1]; i = &i[1])
    void* eax_4 = *(*i + 0x10)
    int32_t* ecx_7 = *(eax_4 + 0x5c)
    *(eax_4 + 0x70) = 0
    result = (*(*ecx_7 + 0x14))()

return result
