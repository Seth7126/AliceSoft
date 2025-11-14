// 函数: sub_60c600
// 地址: 0x60c600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1

for (int32_t i = 0; i s< 8; i += 1)
    int32_t* edx_1 = arg1[0xe]
    
    if (i u<= 7 && ((arg1[0x91] - arg1[0x90]) & 0xfffffff8) s> 8)
        int32_t* ecx = *(arg1[0x90] + 0xc)
        var_4 = ecx
        
        if (ecx != 0 && *(arg1[0x96] + (i << 2)) != ecx)
            (*(*edx_1 + 0x28))(edx_1, i, 1, &var_4)
            *(arg1[0x96] + (i << 2)) = var_4

sub_60b080(&arg1[0xb])
int32_t* edi = arg1[0xe]

if (edi != 0)
    (*(*edi + 0x2c))(edi, 0, 0, 0)
    (*(*edi + 0x24))(edi, 0, 0, 0)
    (*(*edi + 0x44))(edi, 0)

(*(*arg1 + 0xbc))(0)
(*(*arg1 + 0xc4))(0)
(*(*arg1 + 0xc8))(0)
(*(*arg1 + 0xcc))(1)
(*(*arg1 + 0xc0))(0, 0)
return sub_60d3f0(arg1) __tailcall
