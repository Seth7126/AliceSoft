// 函数: sub_51fd20
// 地址: 0x51fd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum MESSAGEBOX_RESULT result

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_51fd64
    
    result = sub_5200e0(arg1)
    
    if (result.b != 0)
        *(arg1 + 0x1c) = 1
    label_51fd64:
        void var_8
        void arg_4
        enum MESSAGEBOX_RESULT* eax_1
        int32_t ecx_1
        eax_1, ecx_1 = sub_42f3d0(arg1 + 0x20, &var_8, &arg_4)
        
        if (*eax_1 == *(arg1 + 0x20))
            uint32_t var_14_2 = zx.d(data_75dd2a)
            void* var_18_2 = &arg_4
            sub_4ce350(arg1 + 0x20, &var_8, ecx_1)
            result = sub_5203f0(arg1)
        
        if (*eax_1 != *(arg1 + 0x20) || result.b != 0)
            result.b = 1
            return result
else
    sub_64b530(0x6e313c)

result.b = 0
return result
