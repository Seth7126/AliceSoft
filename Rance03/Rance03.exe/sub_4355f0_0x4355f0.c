// 函数: sub_4355f0
// 地址: 0x4355f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_8 = ebp

if (arg2 != ebp + 0xc)
    sub_401ff0(arg2, ebp + 0xc, 0, 0xffffffff)

sub_4057c0(arg2, 0x6db280, 1)
int32_t esi = 0
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x66666667, *(ebp + 0x30) - *(ebp + 0x2c))
int32_t edx_1 = edx s>> 5
int32_t eax_4 = (edx_1 u>> 0x1f) + edx_1

if (eax_4 s> 0)
    int32_t ebx_1 = 0
    
    do
        sub_403110(arg2, *(ebp + 0x2c) + 0x38 + ebx_1, nullptr, 0xffffffff)
        void* const edx_2 = &data_6db284
        
        if (esi s>= eax_4 - 1)
            edx_2 = &data_6da0c7
        
        void* eax_9
        
        if (*edx_2 != 0)
            void* const eax_10 = edx_2
            void* ebp_1 = eax_10 + 1
            char i
            
            do
                i = *eax_10
                eax_10 += 1
            while (i != 0)
            eax_9 = eax_10 - ebp_1
            ebp = var_8
        else
            eax_9 = nullptr
        
        sub_4057c0(arg2, edx_2, eax_9)
        esi += 1
        ebx_1 += 0x50
    while (esi s< eax_4)

return sub_4057c0(arg2, 0x6db27c, 2)
