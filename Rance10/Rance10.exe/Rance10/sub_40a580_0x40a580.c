// 函数: sub_40a580
// 地址: 0x40a580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
sub_4188f0(*(arg1 + 0xc))
int32_t* result = arg2 - 0x900

switch (result)
    case nullptr
        if (*(arg1 + 8) == 0)
            sub_40c970(arg1)
            *(arg1 + 8) = arg4
            sub_41f760(arg1 + 0x14)
            void* esi_1 = *(arg1 + 0xc)
            result = sub_4189c0(esi_1 + 0x20)
            
            if (result.b != 0)
                int32_t* ecx_4 = *(esi_1 + 0x2c)
                
                if (ecx_4 != 0)
                    int32_t esi_2 = neg.d(esi_1)
                    return (**ecx_4)(sbb.d(esi_2, esi_2, esi_1 != 0) & (esi_1 + 8))
    case 1
        *(arg1 + 8) = 0
    case 2
        return sub_40a760(arg1)
    case 3
        sub_40c970(arg1)
        return sub_40a8b0(arg1)
    case 4
        if (*(arg1 + 8) != 0)
            int32_t* ecx_8 = *(*(arg1 + 0x10) + 8)
            void* eax_5
            
            if (ecx_8 != 0)
                eax_5 = (*(*ecx_8 + 0x10))()
            else
                eax_5.b = 1
            
            WPARAM wParam
            wParam.b = eax_5.b != 0
            return SendMessageA(*(arg1 + 8), arg2, wParam, 0)
    case 5
        return sub_40b2b0(arg1, arg3)
    case 6
        return sub_40aa40(arg1)
    case 7
        return sub_40c5c0(arg1, arg3, arg4)
    case 8
        return sub_40c700(arg1, arg3, arg4)
    case 9
        return sub_40ab90(arg1, arg3, arg4)
    case 0xa
        return sub_4183e0(*(arg1 + 0xc), arg3, arg4)
    case 0xb
        return std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::do_put(
            arg1, arg3, arg4)
    case 0xc
        return sub_40af20(arg1, arg3)
    case 0xd
        return sub_40b150(arg1, arg3, arg4)

return result
