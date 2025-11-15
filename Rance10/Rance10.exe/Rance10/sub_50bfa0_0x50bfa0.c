// 函数: sub_50bfa0
// 地址: 0x50bfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = arg1[0x46] i+ arg4
int32_t eax_1 = arg1[0x47] i+ arg5

if (arg1[0x46] != ecx_1 || arg1[0x47] != eax_1)
    arg1[0x46] = ecx_1
    arg1[0x47] = eax_1
    arg1[0x8a].b = 1

arg1[0x31] += arg2
arg1[0x32] += arg2

if (arg1[0x8a].b != 0)
    sub_50c7e0(arg1)

sub_50c1d0(arg1, arg3)
void** esi = arg1[0x1e]
int32_t ebx = 0
uint32_t ecx_7 = (arg1[0x1f] - esi + 3) u>> 2

if (esi u> arg1[0x1f])
    ecx_7 = 0

if (ecx_7 != 0)
    do
        float var_1c_1 = arg5
        float var_20_1 = arg4
        sub_4ee2b0(*esi, arg2, arg2, arg3)
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_7)

if ((*(*arg1 + 0x18))() != 0)
    void* eax_5 = sub_4ee010(arg1[0x8b])
    
    if (eax_5 != 0)
        void* eax_6
        eax_6.b = *(eax_5 + 0x40) == sub_4f46e0(data_7fcba4 + 0x124)
        
        if (eax_6.b != 0)
            void* ecx_13 = arg1[0x2a]
            arg4 = 0f
            arg5 = 0f
            void* eax_7 = *(ecx_13 + 0x31c)
            void* eax_8
            
            if (eax_7 != 0)
                eax_8 = *(eax_7 + 8)
            else
                eax_8 = data_7fcba0
            
            sub_528b80(ecx_13 + 0x268, &arg4, &arg5, (zx.o(0)).d, (zx.o(0)).d, ecx_13 + 0x268, 
                eax_8)
            long double x87_r0
            long double x87_r1
            float xmm0_3 = sub_63ce00(arg5, x87_r0, x87_r1)
            long double x87_r2
            float xmm0_5 = sub_63ce00(arg4, x87_r1, x87_r2)
            void* esi_2 = data_7fcbbc
            float xmm0_6
            
            if (esi_2 != 0)
                float xmm0_7 = 1f
                
                if (sub_63c080(esi_2) != 0)
                    (*(**(esi_2 + 0x2c) + 0x60))()
                    arg5 = fconvert.s(x87_r2)
                    xmm0_7 = arg5
                
                void* esi_3 = data_7fcbbc
                arg5 = xmm0_7
                char eax_13
                
                if (esi_3 != 0)
                    eax_13 = sub_63c080(esi_3)
                
                if (esi_3 != 0 && eax_13 != 0)
                    (*(**(esi_3 + 0x2c) + 0x60))()
                    arg4 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                    unimplemented  {fstp dword [esp+0x24], st0}
                    xmm0_6 = arg4
                else
                    xmm0_6 = 1f
            else
                xmm0_6 = 1f
                arg5 = 1f
            
            int32_t var_1c_3 = int.d(arg5 * xmm0_5)
            int32_t var_20_3 = int.d(xmm0_6 * xmm0_3)
            sub_50d0c0(arg1)

sub_4c2bb0(&arg1[0x10])
struct partsengine::IEventArgs::partsengine::SCreatedEventArgs::VTable* const var_4 =
    &partsengine::SCreatedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(&arg1[3], &var_4, 0)
