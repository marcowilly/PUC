function Empresa() {
    Responsavel.call(this);
    this.urlPadrao = '';
    this.cnpj = '';
    this.telefone = '';
    this.email = '';
    this.cpf = '';
    this.emailResponsavel = '';
    this.telefoneResponsavel = '';
    this.descricao = '';
    this.nome = '';
    this.foto = '';
}

Empresa.prototype = Object.create(Responsavel.prototype);
Empresa.prototype.constructor = SalesPerson;