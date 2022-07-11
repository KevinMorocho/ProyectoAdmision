#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string nombrePersona[30];
    int notaPersona[30];
    int numPersona;

    printf("\n Ingrese el numero de personas a registrar:");
    scanf("%d", &numPersona);
    if (numPersona > 0 && numPersona <= 30)
    {
        char nombre;
        int nota;
        int i;
        for (i = 1; i <= numPersona; i++)
        {
            fflush(stdin);
            printf("\n Ingrese el nombre del estudiante [%i] : ", i);
            scanf("%s", &nombrePersona[i]);
            printf("\n Ingrese la nota del estudiante [%i] : ", i);
            scanf("%d", &notaPersona[i]);
        }

        for (i = 1; i <= numPersona; i++)
        {
            // Facultad Administracion y Empresas
            if (notaPersona[i] == 925)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 925);
                printf("\n Admision: Administracion y Empresas ");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 710)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 710);
                    printf("\n Admision: Finanzas ");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 800)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 800);
                        printf("\n Admision: Mercadotecnia ");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 857)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 857);
                            printf("\n Admision: Contabilidad ");
                            printf("\n---------------------------------");
                        }
                        else
                        {
                            if (notaPersona[i] == 775)
                            {
                                printf("\n Datos del Estudiante [%i] : ", i);
                                printf("\n Nombre: %s  ", &nombrePersona[i]);
                                printf("\n Nota: %d", 775);
                                printf("\n Admision: Gestion y Transporte ");
                                printf("\n---------------------------------");
                            }
                        }
                    }
                }
            }
            // Facultad de Ciencias
            if (notaPersona[i] == 814)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 814);
                printf("\n Admision: Quimica ");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 827)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 827);
                    printf("\n Admision: Ambiental ");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 921)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 921);
                        printf("\n Admision: Bioq. Farmacia ");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 695)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 695);
                            printf("\n Admision: Estadistica ");
                            printf("\n---------------------------------");
                        }
                        else
                        {
                            if (notaPersona[i] == 700)
                            {
                                printf("\n Datos del Estudiante [%i] : ", i);
                                printf("\n Nombre: %s  ", &nombrePersona[i]);
                                printf("\n Nota: %d", 700);
                                printf("\n Admision: Matematica");
                                printf("\n---------------------------------");
                            }
                            else
                            {
                                if (notaPersona[i] == 735)
                                {
                                    printf("\n Datos del Estudiante [%i] : ", i);
                                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                                    printf("\n Nota: %d", 735);
                                    printf("\n Admision: Fisica");
                                    printf("\n---------------------------------");
                                }
                                else
                                {
                                    if (notaPersona[i] == 832)
                                    {
                                        printf("\n Datos del Estudiante [%i] : ", i);
                                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                                        printf("\n Nota: %d", 832);
                                        printf("\n Admision: Ing Quimica");
                                        printf("\n---------------------------------");
                                    }
                                }
                            }
                        }
                    }
                }
            }
            // Facultad Ciencias Pecuarias
            if (notaPersona[i] == 850)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 850);
                printf("\n Admision: Zootecnia");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 674)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 674);
                    printf("\n Admision: AgroIndustrias");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 909)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 909);
                        printf("\n Admision: Veterinaria");
                        printf("\n---------------------------------");
                    }
                }
            }
            // Facultad Informatica y Electronica
            if (notaPersona[i] == 814)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 814);
                printf("\n Admision: Disenio Grafico");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 950)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 950);
                    printf("\n Admision: Electronica");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 801)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 801);
                        printf("\n Admision: Telecomunicaciones");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 850)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 850);
                            printf("\n Admision: Software");
                            printf("\n---------------------------------");
                        }
                        else
                        {
                            if (notaPersona[i] == 807)
                            {
                                printf("\n Datos del Estudiante [%i] : ", i);
                                printf("\n Nombre: %s  ", &nombrePersona[i]);
                                printf("\n Nota: %d", 807);
                                printf("\n Admision: TICS");
                                printf("\n---------------------------------");
                            }
                        }
                    }
                }
            }
            // Facultad de Mecanica
            if (notaPersona[i] == 841)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 841);
                printf("\n Admision: Mecanica");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 905)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 905);
                    printf("\n Admision: Industrial");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 761)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 761);
                        printf("\n Admision: Mantenimiento");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 927)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 927);
                            printf("\n Admision: Automotriz");
                            printf("\n---------------------------------");
                        }
                    }
                }
            }
            // Facultad Recursos Naturales
            if (notaPersona[i] == 812)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 812);
                printf("\n Admision: Agronomia");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 646)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 646);
                    printf("\n Admision: Forestal");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 725)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 725);
                        printf("\n Admision: Turismo");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 646)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 646);
                            printf("\n Admision: Recursos Renovables");
                            printf("\n---------------------------------");
                        }
                    }
                }
            }
            // Facultad de Salud Publica
            if (notaPersona[i] == 787)
            {
                printf("\n Datos del Estudiante [%i] : ", i);
                printf("\n Nombre: %s  ", &nombrePersona[i]);
                printf("\n Nota: %d", 787);
                printf("\n Admision: Promocion de la Salud");
                printf("\n---------------------------------");
            }
            else
            {
                if (notaPersona[i] == 909)
                {
                    printf("\n Datos del Estudiante [%i] : ", i);
                    printf("\n Nombre: %s  ", &nombrePersona[i]);
                    printf("\n Nota: %d", 909);
                    printf("\n Admision: Nutricion");
                    printf("\n---------------------------------");
                }
                else
                {
                    if (notaPersona[i] == 963)
                    {
                        printf("\n Datos del Estudiante [%i] : ", i);
                        printf("\n Nombre: %s  ", &nombrePersona[i]);
                        printf("\n Nota: %d", 963);
                        printf("\n Admision: Medicina");
                        printf("\n---------------------------------");
                    }
                    else
                    {
                        if (notaPersona[i] == 898)
                        {
                            printf("\n Datos del Estudiante [%i] : ", i);
                            printf("\n Nombre: %s  ", &nombrePersona[i]);
                            printf("\n Nota: %d", 898);
                            printf("\n Admision: Gastronomia");
                            printf("\n---------------------------------");
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (numPersona <= 0)
        {
            printf("\n Ingrese un numero positivo mayor a cero");
        }
        else
        {
            printf("\n Su limite es hasta 30");
        }
    }
    return 0;
}