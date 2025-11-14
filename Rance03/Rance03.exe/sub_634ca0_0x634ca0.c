// 函数: sub_634ca0
// 地址: 0x634ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg2 & 0xb

if (edx == 0)
    if ((*(arg1 + 0x74) & 0x8000) != 0)
    label_634ce9:
        sub_62a520(arg1, "invalid location in png_set_unknown_chunks")
        noreturn
    
    if ((*(arg1 + 0x78) & 0x200000) == 0)
        sub_62a520(arg1, "png_set_unknown_chunks now expects a valid location")
        noreturn
    
    sub_62a550(arg1, "png_set_unknown_chunks now expects a valid location")
    edx = zx.d(*(arg1 + 0x74)) & 0xb
    
    if (edx == 0)
        goto label_634ce9

int32_t i

for (i = neg.d(edx) & edx; edx != i; i = neg.d(edx) & edx)
    edx &= not.d(i)

i.b = edx.b
return i
