// 函数: sub_60d1b0
// 地址: 0x60d1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_60d3f0(arg1)
sub_60fbb0(arg1 + 0x23c)
sub_60a220(arg1 + 0x21c)
int32_t* ecx_2 = *(arg1 + 0x218)

if (ecx_2 != 0)
    (**ecx_2)(1)
    *(arg1 + 0x218) = 0

int32_t* ecx_3 = *(arg1 + 0x214)

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    *(arg1 + 0x214) = 0

int32_t* ecx_4 = *(arg1 + 0x20c)

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    *(arg1 + 0x20c) = 0

int32_t* ecx_5 = *(arg1 + 0x1b4)

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0x1b4) = 0

int32_t* ecx_6 = *(arg1 + 0x1ac)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0x1ac) = 0

if (sub_60dc40(arg1 + 0xfc) != 0 && sub_60dc40(arg1 + 0xe4) != 0)
    for (int32_t* i = *(arg1 + 0xb8); i != *(arg1 + 0xbc); i = &i[1])
        if (sub_60f820(*i) == 0)
            return 0
    
    if (sub_60d970(arg1 + 0x9c) != 0 && sub_60d890(arg1 + 0x84) != 0
            && sub_60d7b0(arg1 + 0x6c) != 0)
        sub_60aed0(arg1 + 0x2c)
        void* result
        result.b = 1
        return result

return 0
