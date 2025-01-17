// This file is converted by code7bit.
// code7bit: https://github.com/katahiromz/code7bit
// To revert conversion, please execute "code7bit -r <file>".
/* Translated by ??? and Ismael Ferreras Morezuelas (Swyter) */

#pragma once

static MUI_ENTRY esESSetupInitPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        20,
        "Please wait while the ReactOS Setup initializes itself",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        21,
        "and discovers your devices...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        0,
        "Please wait...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESLanguagePageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Selecci\242n del idioma",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Seleccione el idioma a utilizar durante la instalaci\242n.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Luego presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  El idioma seleccionado tambi\202n ser\240 el idioma del sistema.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESWelcomePageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Bienvenido a la instalaci\242n de ReactOS",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "Esta parte de la instalaci\242n copiar\240 ReactOS en su equipo y",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "prepara la segunda parte de la instalaci\242n.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press ENTER to install or upgrade ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Presione R para reparar ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Presione L para ver las condiciones y t\202rminos de licencia.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Presione F3 para salir sin instalar ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Para m\240s informaci\242n sobre ReactOS, visite la Web:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "   INTRO = Continuar  R = Reparar  L = Licencia  F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESIntroPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Version Status",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS is in Alpha stage, meaning it is not feature-complete",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "and is under heavy development. It is recommended to use it only for",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "evaluation and testing purposes and not as your daily-usage OS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "Backup your data or test on a secondary computer if you attempt",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "to run ReactOS on real hardware.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ENTER to continue ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Continue   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESLicensePageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "Licencia:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "ReactOS se distribuye bajo los t\202rminos de la licencia",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU GPL con partes que contienen c\242digo de otras",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "licencias compatibles como la X11 o BSD y la GNU LGPL.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "Todo el software que forma parte del sistema ReactOS est\240",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "por tanto liberado bajo licencia GNU GPL as\241 como manteniendo",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "la licencia original.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Este software viene SIN GARANTIA o restricciones de uso",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "excepto leyes locales o internacionales aplicables. La licencia",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "de ReactOS cubre solo la distribuci\242n a terceras partes.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "Si por alg\243n motivo no recibi\242 una copia de la",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "GNU General Public License con ReactOS visite:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "Garant\241a:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "Este es un software libre; vea el c\242digo para las condiciones de copia.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "No existe garant\241a; ni siquiera de MERCANTIBILIDAD",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "o el cumplimiento de alg\243n prop\242sito particular",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "INTRO = Regresar",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESDevicePageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "La lista inferior muestra la configuraci\242n actual de dispositivos.",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "Equipo:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "Pantalla:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "Tipo de teclado:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "Distrib. del teclado:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "Aceptar:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "Aceptar la configuraci\242n de los dispositivos",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "Puede modificar la configuraci\242n con las teclas ARRIBA y ABAJO",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "para elegir. Luego presione INTRO para cambiar a una configuraci\242n",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "alternativa.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Cuando la configuraci\242n sea correcta, elija \"Aceptar la configuraci\242n",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "de los dispostivos\" y presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESRepairPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "El instalador de ReactOS se encuentra en una etapa preliminar.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "A\243n no posee todas las funciones de un instalador.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Las funciones de reparaci\242n no han sido a\243n implementadas.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Presione U para actualizar el sistema operativo.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Presione R para la consola de recuperaci\242n.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Presione ESC para volver al men\243 principal.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Presione INTRO para reiniciar su equipo.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = Men\243 inicial  U = Actualizar  R = Recuperar  INTRO = Reiniciar",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESUpgradePageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The ReactOS Setup can upgrade one of the available ReactOS installations",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "listed below, or, if a ReactOS installation is damaged, the Setup program",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "can attempt to repair it.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "The repair functions are not all implemented yet.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        15,
        "\x07  Press UP or DOWN to select an OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press U for upgrading the selected OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ESC to continue with a new installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "U = Upgrade   ESC = Do not upgrade   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESComputerPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Desea modificar el tipo de equipo a instalar.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Presione ARRIBA y ABAJO para elegir el tipo.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "Luego presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Presione ESC para volver a la p\240gina anterior sin cambiar",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "el tipo de equipo.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESFlushPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "El sistema se est\240 asegurando que todos los datos sean salvados.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Esta operaci\242n puede durar varios minutos.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "Cuando haya terminado, su equipo se reiniciar\240 autom\240ticamente.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Vaciando la cach\202",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESQuitPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS no ha sido instalado completamente.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Retire cualquier disquete de la unidad A: y los CDs de sus unidades.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Presione INTRO para reiniciar su equipo.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Espere un momento...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESDisplayPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Desea modificar el tipo de pantalla a instalar.",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
         "\x07  Presione ARRIBA y ABAJO para modificar el tipo.",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Luego presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Presione la tecla ESC para volver a la p\240gina anterior sin",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   modificar el tipo de pantalla.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESSuccessPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Los componentes b\240sicos de ReactOS han sido instalados correctamente.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Retire cualquier disquete de la unidad A: y todos los",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "CD-ROMs de sus respectivas unidades.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Presione INTRO para reiniciar su equipo.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Reiniciar su equipo",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESBootPageEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "El instalador no pudo instalar el cargador de arranque en el disco",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "de su equipo",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "Inserte un disquete formateado en la unidad A: y",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "presione INTRO.",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "   INTRO = Continuar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY esESSelectPartitionEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "La lista inferior muestra las particiones existentes y el espacio libre",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "en el disco para nuevas particiones.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  Presione ARRIBA o ABAJO para seleccionar un elemento de la lista.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Presione INTRO para instalar ReactOS en la partici\242n seleccionada.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Presione P para crear una partici\242n primaria.",
//        "\x07  Presione C para crear una nueva partición.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Presione E para crear una partici\242n extendida.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Presione L para crear una partici\242n l\242gica.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Presione D para borrar una partici\242n existente.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Espere un momento...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Ha solicitado borrar la partici\242n del sistema.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "Las particiones del sistema contienen programas de diagn\242stico y configuraci\242n",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "de dispositivos, para arrancar un sistema operativo (como ReactOS) u otros",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programas fundamentales proporcionados por el fabricante de hardware.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Borre particiones del sistema \243nicamente cuando est\202 seguro de que no",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "haya programas de ese tipo en la partici\242n, o cuando est\202 seguro de borrarlos.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "Cuando se elimina una partici\242n puede perder la posibilidad de arrancar el",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "equipo desde ese disco duro hasta que termine de instalar ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Presione INTRO para borrar la partici\242n del sistema, se",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   volver\240 a pedir confirmaci\242n m\240s tarde.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Presione ESC para volver a la p\240gina anterior. Si lo hace ",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   la partici\242n no se borrar\240.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "INTRO=Continuar  ESC=Cancelar",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESFormatPartitionEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Formato de la partici\242n",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "El instalador formatear\240 la partici\242n. Presione INTRO para continuar.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   F3 = Salir",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY esESInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "El programa instalar\240 los archivos en la partici\242n seleccionada.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "Seleccione un directorio donde quiere que sea instalado ReactOS:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Para cambiar el directorio sugerido, presione RETROCESO para borrar",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "caracteres y escriba el directorio donde desea que ReactOS",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "sea instalado.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESFileCopyEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        12,
        "Espere un momento mientras el Instalador de ReactOS copia",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        13,
        "archivos en su carpeta de instalaci\242n de ReactOS.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        14,
        "Esta operaci\242n puede durar varios minutos.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 Espere un momento...",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESBootLoaderEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "A continuaci\242n el programa instalar\240 el cargador de arranque",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "Instalar el cargador de arranque en el disco duro (MBR y VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "Instalar el cargador de arranque en el disco duro (s\242lo VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "Instalar el cargador de inicio en un disquete.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Omitir la instalaci\242n del cargador de arranque.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   F3 = Salir",
        TEXT_TYPE_STATUS  | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Desea cambiar el tipo de teclado instalado.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Presione ARRIBA o ABAJO para seleccionar el tipo de teclado.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   Luego presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Presione la tecla ESC para volver a la p\240gina anterior sin cambiar",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   el tipo de teclado.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Seleccione la distribuci\242n de teclado a instalar de forma predeterminada.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Presione ARRIBA o ABAJO para seleccionar la distribuci\242n de teclado",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "    deseada. Luego presione INTRO.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Presione la tecla ESC para volver a la p\240gina anterior sin cambiar",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   la distribuci\242n de teclado.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   INTRO = Continuar   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY esESPrepareCopyEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "El programa prepara su equipo para copiar los archivos de ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Creando la lista de archivos a copiar...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY esESSelectFSEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "Seleccione un sistema de archivos de la lista inferior.",
        0
    },
    {
        8,
        19,
        "\x07  Presione ARRIBA o ABAJO para seleccionar el sistema de archivos.",
        0
    },
    {
        8,
        21,
        "\x07  Presione INTRO para formatear partici\242n.",
        0
    },
    {
        8,
        23,
        "\x07  Presione ESC para seleccionar otra partici\242n.",
        0
    },
    {
        0,
        0,
        "   INTRO = Continuar   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESDeletePartitionEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Ha elegido borrar la partici\242n",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  Presione L para borrar la partici\242n.",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "ADVERTENCIA: \255Se perder\240n todos los datos de esta partici\242n!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Presione ESC para cancelar.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   L = Borrar partici\242n   ESC = Cancelar   F3 = Salir",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY esESRegistryEntries[] =
{
    {
        4,
        3,
        " Instalaci\242n de ReactOS " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "El instalador est\240 actualizando la configuraci\242n del sistema.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "   Creando la estructura del Registro...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR esESErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Completado correctamente\n"
    },
    {
        // ERROR_NOT_INSTALLED
        "ReactOS no est\240 completamente instalado en su\n"
        "equipo. Si cierra ahora el Instalador, necesitar\240\n"
        "ejecutarlo otra vez para instalar ReactOS.\n"
        "\n"
        "  \x07  Presione INTRO para continuar con el instalador.\n"
        "  \x07  Presione F3 para abandonar el instalador.",
        "F3 = Salir  INTRO = Continuar"
    },
    {
        // ERROR_NO_BUILD_PATH
        "Failed to build the installation paths for the ReactOS installation directory!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_SOURCE_PATH
        "You cannot delete the partition containing the installation source!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_SOURCE_DIR
        "You cannot install ReactOS within the installation source directory!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_NO_HDD
        "El instalador no pudo encontrar un disco duro.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_NO_SOURCE_DRIVE
        "El instalador no pudo encontrar su unidad fuente.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_LOAD_TXTSETUPSIF
        "El instalador fall\242 al cargar el archivo TXTSETUP.SIF.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CORRUPT_TXTSETUPSIF
        "El instalador encontr\242 un archivo TXTSETUP.SIF corrupto.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_SIGNATURE_TXTSETUPSIF,
        "El instalador encontr\242 una firma incorrecta en TXTSETUP.SIF.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_DRIVE_INFORMATION
        "El instalador no pudo recibir informaci\242n del disco del sistema.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_WRITE_BOOT,
        "El instalador fall\242 al instalar el c\242digo de inicio %S en la partici\242n del sistema.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_LOAD_COMPUTER,
        "El instalador fall\242 al cargar la lista de tipos de equipos.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_LOAD_DISPLAY,
        "El instalador fall\242 al cargar la lista de resoluciones de pantalla.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_LOAD_KEYBOARD,
        "El instalador fall\242 al cargar la lista de teclados.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_LOAD_KBLAYOUT,
        "El instalador fall\242 al cargar la lista de distribuciones de teclado.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_WARN_PARTITION,
        "\255El instalador encontr\242 que al menos un disco duro contiene una tabla\n"
        "de partici\242n incompatible que no puede ser manejada correctamente!\n"
        "\n"
        "Crear o borrar particiones puede destruir la tabla de particiones.\n"
        "\n"
        "  \x07  Presione F3 para salir del instalador.\n"
        "  \x07  Presione INTRO para continuar.",
        "F3 = Salir  INTRO = Continuar"
    },
    {
        // ERROR_NEW_PARTITION,
        "\255No puede crear una nueva partici\242n dentro\n"
        "de una partici\242n existente!\n"
        "\n"
        "  * Presione cualquier tecla para continuar.",
        NULL
    },
    {
        // ERROR_DELETE_SPACE,
        "\255No se puede borrar un espacio de disco sin particionar!\n"
        "\n"
        "  * Presione cualquier tecla para continuar.",
        NULL
    },
    {
        // ERROR_INSTALL_BOOTCODE,
        "El instalador fall\242 al instalar el c\242digo de inicio %S en la partici\242n del sistema.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_NO_FLOPPY,
        "No hay disco en la unidad A:.",
        "INTRO = Continuar"
    },
    {
        // ERROR_UPDATE_KBSETTINGS,
        "El instalador fall\242 al actualizar la configuraci\242n de distribuci\242n de teclado.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_UPDATE_DISPLAY_SETTINGS,
        "El instalador fall\242 al actualizar la configuraci\242n de la pantalla.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_IMPORT_HIVE,
        "El instalador fall\242 al importar un archivo de la estructura.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_FIND_REGISTRY
        "El instalador fall\242 al buscar los archivos de datos registrados.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CREATE_HIVE,
        "El instalador fall\242 al crear el registro de la estructura.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_INITIALIZE_REGISTRY,
        "El instalador fall\242 al configurar el registro de inicio.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_INVALID_CABINET_INF,
        "Cabinet no tiene un archivo inf v\240lido.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CABINET_MISSING,
        "Cabinet no encontrado.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CABINET_SCRIPT,
        "Cabinet no tiene ning\243n script de instalaci\242n.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_COPY_QUEUE,
        "El instalador fall\242 al abrir la lista de archivos a copiar.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CREATE_DIR,
        "El instalador no puede crear los directorios de instalaci\242n.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_TXTSETUP_SECTION,
        "El instalador fall\242 al buscar la secci\242n '%S'\n"
        "en TXTSETUP.SIF.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CABINET_SECTION,
        "El instalador fall\242 al buscar la secci\242n '%S'\n"
        "en el cabinet.\n",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_CREATE_INSTALL_DIR
        "El instalador no puede crear el directorio de instalaci\242n.",
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_WRITE_PTABLE,
        "El instalador fall\242 al escribir la tabla de particiones.\n"
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_ADDING_CODEPAGE,
        "El instalador fall\242 al a\244adir el c\242digo de p\240ginas al registro.\n"
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_UPDATE_LOCALESETTINGS,
        "El instalador no pudo configurar el idioma del sistema.\n"
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_ADDING_KBLAYOUTS,
        "El instalador no ha podido agregar los layouts de teclado al registro.\n"
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_UPDATE_GEOID,
        "El instalador no ha podido configurar el ID geogr\240fico.\n"
        "INTRO = Reiniciar el equipo"
    },
    {
        // ERROR_DIRECTORY_NAME,
        "Nombre de carpeta no v\240lido.\n"
        "\n"
        "  * Presione una tecla para continuar."
    },
    {
        // ERROR_INSUFFICIENT_PARTITION_SIZE,
        "La partici\242n selecionada no es lo suficientemente grande como para.\n"
        "instalar ReactOS. Se necesita una partici\242n de al menos %lu MB.\n"
        "\n"
        "  * Presione una tecla para continuar.",
        NULL
    },
    {
        // ERROR_PARTITION_TABLE_FULL,
        "No es posible a\244adir una partici\242n primaria o extendida en la\n"
        "tabla de partici\242n de este disco, ya que est\240 completamente llena.\n"
        "\n"
        "  * Presione una tecla para continuar."
    },
    {
        // ERROR_ONLY_ONE_EXTENDED,
        "No es posible crear m\240s de una partici\242n extendida por disco.\n"
        "\n"
        "  * Presione una tecla para continuar."
    },
    {
        // ERROR_FORMATTING_PARTITION,
        "El instalador es incapaz de formatear la partici\242n:\n"
        " %S\n"
        "\n"
        "INTRO = reiniciar equipo"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE esESPages[] =
{
    {
        SETUP_INIT_PAGE,
        esESSetupInitPageEntries
    },
    {
        LANGUAGE_PAGE,
        esESLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        esESWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        esESIntroPageEntries
    },
    {
        LICENSE_PAGE,
        esESLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        esESDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        esESRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        esESUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        esESComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        esESDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        esESFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        esESSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        esESConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        esESSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        esESFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        esESDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        esESInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        esESPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        esESFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        esESKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        esESBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        esESLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        esESQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        esESSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        esESBootPageEntries
    },
    {
        REGISTRY_PAGE,
        esESRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING esESStrings[] =
{
    {STRING_PLEASEWAIT,
     "   Espere un momento..."},
    {STRING_INSTALLCREATEPARTITION,
     "   INTRO = Instalar  P = Crear primaria   E = Crear extendida   F3 = Salir"},
    {STRING_INSTALLCREATELOGICAL,
     "   INTRO = Instalar  C = Crear partici\242n l\242gica   F3 = Salir"},
    {STRING_DELETEPARTITION,
     "   D = Borrar partici\242n   F3 = Salir"},
    {STRING_INSTALLDELETEPARTITION,
     "   INTRO = Instalar   D = Borrar partici\242n   F3 = Salir"},
    {STRING_PARTITIONSIZE,
     "Tama\244o de la nueva partici\242n:"},
    {STRING_CHOOSENEWPARTITION,
     "Ha elegido crear una nueva partici\242n primaria en"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "Ha elegido crear una nueva partici\242n extendida en"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "Ha elegido crear una nueva partici\242n l\242gica en"},
    {STRING_HDDSIZE,
    "Escriba el tama\244o de la nueva partici\242n en megabytes."},
    {STRING_CREATEPARTITION,
     "   INTRO = Crear partici\242n   ESC = Cancelar   F3 = Salir"},
    {STRING_PARTFORMAT,
    "A continuaci\242n se formatear\240 esta partici\242n."},
    {STRING_NONFORMATTEDPART,
    "Ha elegido instalar ReactOS en una nueva partici\242n o en una partici\242n sin formato."},
    {STRING_NONFORMATTEDSYSTEMPART,
    "La partici\242n del sistema todav\241a no ha sido formateada."},
    {STRING_NONFORMATTEDOTHERPART,
    "La partici\242n nueva todav\241a no ha sido formateada."},
    {STRING_INSTALLONPART,
    "El instalador est\240 instalando ReactOS en la partici\242n"},
    {STRING_CHECKINGPART,
    "El instalador est\240 comprobando la partici\242n seleccionada."},
    {STRING_CONTINUE,
    "INTRO = Continuar"},
    {STRING_QUITCONTINUE,
    "F3 = Salir  INTRO = Continuar"},
    {STRING_REBOOTCOMPUTER,
    "INTRO = Reiniciar el equipo"},
    {STRING_DELETING,
     "   Deleting file: %S"},
    {STRING_MOVING,
     "   Moving file: %S to: %S"},
    {STRING_RENAMING,
     "   Renaming file: %S to: %S"},
    {STRING_COPYING,
     "   Copiando archivo: %S"},
    {STRING_SETUPCOPYINGFILES,
     "El instalador est\240 copiando archivos..."},
    {STRING_REGHIVEUPDATE,
    "   Actualizando el \240rbol del registro..."},
    {STRING_IMPORTFILE,
    "   Importando %S..."},
    {STRING_DISPLAYSETTINGSUPDATE,
    "   Actualizando configuraci\242n del tipo de pantalla..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   Actualizando configuraci\242n regional..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   Actualizando configuraci\242n de distribuci\242n de teclado..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   A\244adiendo informaci\242n al registro..."},
    {STRING_DONE,
    "   Terminado..."},
    {STRING_REBOOTCOMPUTER2,
    "   INTRO = Reiniciar el equipo"},
    {STRING_REBOOTPROGRESSBAR,
    " Your computer will reboot in %li second(s)... "},
    {STRING_CONSOLEFAIL1,
    "No se pudo abrir la consola\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "La causa m\240s com\243n es la utilizaci\242n de un teclado USB\r\n"},
    {STRING_CONSOLEFAIL3,
    "Todav\241a no se soportan los teclados USB por completo\r\n"},
    {STRING_FORMATTINGDISK,
    "El instalador est\240 formateando el disco"},
    {STRING_CHECKINGDISK,
    "El instalador est\240 verificando el disco"},
    {STRING_FORMATDISK1,
    " Formatear la partici\242n con sistema de archivos %S (formato r\240pido) "},
    {STRING_FORMATDISK2,
    " Formatear la partici\242n con sistema de archivos %S "},
    {STRING_KEEPFORMAT,
    " Mantener el sistema de archivos actual (sin cambios) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) en %wZ [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  Tipo 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "en %I64u %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) en %wZ [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "en %I64u %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "Disco duro %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  Tipo 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "en Disco duro %lu (%I64u %s), Port=%hu, Bus=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %sTipo %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) en %wZ [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  Disco duro %lu  (Port=%hu, Bus=%hu, Id=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "El instalador ha creado una nueva partici\242n en"},
    {STRING_UNPSPACE,
    "    %sEspacio sin particionar%s            %6lu %s"},
    {STRING_MAXSIZE,
    "MB (m\240x. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Partici\242n extendida"},
    {STRING_UNFORMATTED,
    "Nueva (sin formato)"},
    {STRING_FORMATUNUSED,
    "Libre"},
    {STRING_FORMATUNKNOWN,
    "desconocido"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "A\244adiendo distribuci\242n de teclado"},
    {0, 0}
};
