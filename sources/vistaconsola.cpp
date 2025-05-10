#include <headers/vistaconsola.h>
#include <iostream>

void VistaConsola::mostrarMenu() {
    std::cout << "\n1. Registrar Vehiculo\n2. Registrar Cliente\n3. Listar Vehiculos\n4. Listar Clientes\n5. Salir\nOpcion: ";
}

Vehiculo VistaConsola::pedirDatosVehiculo() {
    std::string c, m, mo;
    int a, k;
    float p;
    std::cout << "Codigo: "; std::cin >> c;
    std::cout << "Marca: "; std::cin >> m;
    std::cout << "Modelo: "; std::cin >> mo;
    std::cout << "Año: "; std::cin >> a;
    std::cout << "Kilometraje: "; std::cin >> k;
    std::cout << "Precio: "; std::cin >> p;
    return Vehiculo(QString::fromStdString(c), QString::fromStdString(m), QString::fromStdString(mo), a, k, p);
}

Cliente VistaConsola::pedirDatosCliente() {
    std::string d, n, t, dir;
    std::cout << "DNI: "; std::cin >> d;
    std::cout << "Nombre: "; std::cin >> n;
    std::cout << "Telefono: "; std::cin >> t;
    std::cout << "Direccion: "; std::cin >> dir;
    return Cliente(QString::fromStdString(d), QString::fromStdString(n), QString::fromStdString(t), QString::fromStdString(dir));
}

void VistaConsola::mostrarVehiculos(const std::vector<Vehiculo>& vs) {
    for (const auto& v : vs)
        std::cout << v.codigo.toStdString() << " " << v.marca.toStdString() << " " << v.modelo.toStdString()
                  << " " << v.anio << " " << v.kilometraje << " km " << v.precio << "$\n";
}

void VistaConsola::mostrarClientes(const std::vector<Cliente>& cs) {
    for (const auto& c : cs)
        std::cout << c.dni.toStdString() << " " << c.nombre.toStdString()
                  << " " << c.telefono.toStdString() << " " << c.direccion.toStdString() << "\n";
}
