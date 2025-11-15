// 函数: sub_45bc70
// 地址: 0x45bc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg5 = 0
*arg4 = 0
int32_t* eax
struct decodecg::CDecodePNG::VTable* var_40
void var_38

if (arg2 != 0 && arg3 s> 0)
    switch ((*(*arg1 + 0xc))(arg2, arg3) - 1)
        case nullptr
            struct decodecg::CDecodeBMP::VTable** eax_3 = sub_45b650(&var_38)
            var_40 = eax_3
            
            if (sub_45b7a0(eax_3, arg2, arg3).b != 0)
                struct decodecg::CDecodePNG::VTable* edx_1 = var_40
                *arg4 = edx_1
                *arg5 = edx_1
                eax.b = 1
                return eax
        case 1
            struct decodecg::CDecodeQNT::VTable** eax_5 = sub_45c8f0(&var_38)
            var_40 = eax_5
            
            if (sub_45c990(eax_5, arg2, arg3).b == 0)
                eax.b = 1
                return eax
            
            struct decodecg::CDecodePNG::VTable* edx_2 = var_40
            *arg4 = edx_2
            *arg5 = edx_2
            struct decodecg::CDecodePNG::VTable eax_7
            eax_7.vFunc_0.b = 0
            return eax_7
        case 3
            if (sub_45afd0(arg2, arg3, arg4, arg5).b == 0)
                eax.b = 1
                return eax
        case 4
            sub_45c7e0(&var_40)
            int32_t* ebx
            ebx.b = sub_45c880(arg2, arg3, arg4, arg5) == 0
            sub_45c860(&var_40)
            
            if (ebx.b != 0)
                eax.b = 1
                return eax
        case 5
            if (sub_45d3c0(EnumC13Lines::EnumC13Lines(&var_38), arg2, arg3, arg4, arg5).b == 0)
                eax.b = 1
                return eax
eax.b = 0
return eax
